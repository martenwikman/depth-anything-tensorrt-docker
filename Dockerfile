FROM nvcr.io/nvidia/tensorrt:23.12-py3
RUN apt update && apt install -y libopencv* && git clone https://github.com/LiheYoung/Depth-Anything.git && cd  Depth-Anything && pip install -r requirements.txt && pip install onnx 
RUN git clone  https://github.com/spacewalk01/depth-anything-tensorrt.git && wget https://huggingface.co/spaces/LiheYoung/Depth-Anything/resolve/main/checkpoints/depth_anything_vitb14.pth?download=true -O depth_anything_vitb14.pth && mkdir depthanything && mkdir depthanything/checkpoints && mv depth_anything_vitb14.pth depthanything/checkpoints/
RUN cp -r Depth-Anything/* depthanything/ && cp -r depth-anything-tensorrt/* depthanything/
RUN cd depthanything && cp dpt.py depth_anything && python export_to_onnx.py && mv depth_anything_vitb14.onnx checkpoints/






