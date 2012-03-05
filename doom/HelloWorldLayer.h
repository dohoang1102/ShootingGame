//
//  HelloWorldLayer.h
//  doom
//
//  Created by Xiaobin Chen on 12-3-5.
//  Copyright xb 2012年. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "SimpleAudioEngine.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor
{
    NSMutableArray *_targets;
    NSMutableArray *_projectiles;
    
    // score
    int _projectilesDestroyed;
    
    CCSprite *_player;
    
    CCSprite *_nextProjectile;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
