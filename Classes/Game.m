//
//  Game.m
//  AppScaffold
//

#import "Game.h" 
#import "CatchThemAllStage.h"

@implementation Game

- (id)init
{
    if ((self = [super init]))
    {
        
        CatchThemAllStage *stage=[[CatchThemAllStage alloc] initWithWidth:Sparrow.stage.width height:Sparrow.stage.width];
        [self addChild:stage];
    }
    return self;
}

@end
