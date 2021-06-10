import pygame
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
