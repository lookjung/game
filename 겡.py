Python 3.8.0 (tags/v3.8.0:fa919fd, Oct 14 2019, 19:21:23) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> import pygame
import sys
 
pygame.init()
screen = pygame.display.set_mode((640,320))
 
run = True
while run:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False
 
pygame.quit()
sys.exit()
