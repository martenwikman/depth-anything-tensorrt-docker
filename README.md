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

