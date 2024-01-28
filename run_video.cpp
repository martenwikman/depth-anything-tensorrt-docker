#include "depth_anything/trt_module.h"

int main()
{
    string filename = "input.mp4";
    string model_path = "./checkpoints/depth_anything_vitb14.engine";
    TRTModule model(model_path);
    VideoCapture capture(filename);
    Mat frame;
    if (!capture.isOpened())
        throw "Error when reading.";
    int counter = 0;
    int codec = VideoWriter::fourcc('a', 'v', 'c', '1');
    double fps = 25;
    Size sizeFrame(1920, 1080);
    VideoWriter writer;
    writer.open("output.mp4", codec, fps, sizeFrame, true);
    for (;;)
    {
        capture >> frame;
        if (frame.empty())
            break;
        Mat depth = model.predict(frame);
        Mat colored_depth;
        applyColorMap(depth, colored_depth, COLORMAP_INFERNO);
        Mat xframe;
        resize(frame, xframe, sizeFrame);
        writer.write(colored_depth);
    }
    writer.release();
    return 0;
}
