//
//  IntructionSprite.h
//  CatchThemAll
//
//  Created by saumya ray on 11/19/10.
//  Copyright 2010 Personal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sparrow.h"

#import "TextureUtil.h"
#import "SaumyaEvent.h"

@interface InstructionSprite : SPSprite
{
	SPSprite *infoBox;

	SPImage *one;
	SPImage *two;
	SPImage *three;
	SPImage *four;
	SPImage *five;

	SPTextField *infoColor;
	int touchCounter;
}

@property (nonatomic, strong) SPSprite *infoBox;

@property (nonatomic, strong) SPImage *one;
@property (nonatomic, strong) SPImage *two;
@property (nonatomic, strong) SPImage *three;
@property (nonatomic, strong) SPImage *four;
@property (nonatomic, strong) SPImage *five;

@property (nonatomic, strong) SPTextField *infoColor;
@property (assign) int touchCounter;

-(id)initWithInstruction;
-(void)renderDefault;
-(void)slideIn;
-(void)slideOut;

@end
