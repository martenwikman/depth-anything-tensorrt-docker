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


## Export onnx to engine
```c
cd depthanything 
trtexec --onnx=depth_anything_vitb14.onnx --saveEngine=depth_anything_vitb14.engine
```

## Build software 

Remove `imshow` from main.cpp to run without graphical interface. 


```c
mkdir build
cd build
cmake ..
make
```

## Run 


```c
depth-anything-tensorrt-simplified ../depth_anything_vitb14.engine /container_dir/DJI_0434.mp4 
```

### Output

```c
Time of per frame: 47ms
Time of per frame: 47ms
Time of per frame: 47ms
Time of per frame: 49ms
Time of per frame: 47ms
Time of per frame: 48ms
Time of per frame: 46ms
Time of per frame: 47ms
Time of per frame: 47ms
Time of per frame: 47ms
``````


