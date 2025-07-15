
# Import for OpenCV
import cv2

# This will control the video speed (time between frames)
frame_dalay = 1   # ms

# Load the video from video capture Object
video = cv2.VideoCapture("./mountain.mp4")

if not video.isOpened():
    print("Error: Cannot open video.")
    exit()

# Create video Capture object with codec of video
# Define codec and create VideoWriter object
fourcc = cv2.VideoWriter_fourcc(*'mp4v')  # or 'XVID' or 'X264'
width  = int(video.get(cv2.CAP_PROP_FRAME_WIDTH))
height = int(video.get(cv2.CAP_PROP_FRAME_HEIGHT))
fps    = int(video.get(cv2.CAP_PROP_FPS)) or 30  # fallback to 30 if FPS not found

out = cv2.VideoWriter("./outputVideo.mp4", fourcc, fps, (width, height))

while True:
    ret, frame = video.read()
    if not ret:
        break

    # if loaded successfully, show the video
    # Modify the image
    frame = frame+ 30 
    cv2.imshow("Video Frame", frame)
    
    # while in loop, if I pressed a key == w, break the loop
    # wait 1 msec between every frame while looping on video frames, and check if pressed also key 'w'
    if cv2.waitKey(frame_dalay) & 0xFF == ord('w'):
        break 

    # Write the modified frame
    out.write(frame)


video.release()
out.release()
cv2.destroyAllWindows()
