# Depth anything tensorrt docker image

## Get started

Build docker image 

```c
docker build -t depth-anything-tensorrt .
```

## Run 

```
docker run --gpus all -it --rm -v local_dir:/container_dir depth-anything-tensorrt:latest
```

Run depth_anything.bin and modify main.cpp and recompile

## Video example

```c
g++ run_video.cpp depth_anything/trt_module.cpp -I/usr/local/cuda-12.3/include/ -I/usr/include/opencv4/  -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_imgcodecs -l opencv_videoio -lnvinfer -lrt  -lnvonnxparser -L/usr/local/cuda/lib64 -lcudart -o run_video.bin
```


## Exampel output

Example output, nvidia 3080 ti 
```c
./run_video.bin 
Deserializing Engine.
Inference time: 65 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 12 milliseconds
Inference time: 10 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 11 milliseconds
Inference time: 12 milliseconds
Inference time: 10 milliseconds
Inference time: 10 milliseconds
...
```

### Input file
![image](https://github.com/martenwikman/depth-anything-tensorrt-docker/assets/9117097/c71007ca-4089-45e0-80ab-033c8af19d50)

### Output file
![lol2](https://github.com/martenwikman/depth-anything-tensorrt-docker/assets/9117097/ec962301-e92b-45af-8225-2b42e478acc3)


