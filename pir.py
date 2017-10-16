from gpiozero import MotionSensor
import os 
pir = MotionSensor(4)
while True:
    if pir.motion_detected:
       r= print ("motion detected!")
       if pir=="r"
        os.system("fswebcam -F 3 --fps 20 -r 1200x800 pir.jpg")
        
    
