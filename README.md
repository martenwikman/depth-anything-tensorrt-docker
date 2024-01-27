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


## Exampel output

Example output, nvidia 3080 ti 
```c
./depth_anything.bin 
Deserializing Engine.
Inference time: 69 milliseconds
```

### Input file
![image](https://github.com/martenwikman/depth-anything-tensorrt-docker/assets/9117097/c71007ca-4089-45e0-80ab-033c8af19d50)

### Output file
![lol2](https://github.com/martenwikman/depth-anything-tensorrt-docker/assets/9117097/ec962301-e92b-45af-8225-2b42e478acc3)


