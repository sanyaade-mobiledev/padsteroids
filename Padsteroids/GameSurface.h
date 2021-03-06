//
//  GameSurface.h
//  Padsteroids
//
//  Created by 3Easy on 17/05/11.
//  Copyright 2011 3Easy Web Org. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GameSurface : UIView {
    CGPoint shipLocation;
    double shipDirection;
    
    BOOL gunEnabled;
    double gunDirection;
}

- (void)moveShip:(float)distance angle:(float)angle;

- (void)enableGun:(float)distance angle:(float)angle;
- (void)disableGun;

@end
