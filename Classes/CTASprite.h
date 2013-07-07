//
//  CTASprite.h
//  CatchThemAll
//
//  Created by saumya ray on 11/17/10.
//  Copyright 2010 Personal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sparrow.h"
#import "TextureUtil.h"
#import "SaumyaEvent.h"

@interface CTASprite : SPSprite {
	SPImage __weak *img;
	SPTexture *textureOne;
	SPTexture *textureTwo;
	SPTexture *textureThree;
	SPTexture *textureFour;
	SPTexture *textureFive;
	SPTexture *textureBorder;
}
@property (weak) SPImage *img;
@property (strong) SPTexture *textureOne;
@property (strong) SPTexture *textureTwo;
@property (strong) SPTexture *textureThree;
@property (strong) SPTexture *textureFour;
@property (strong) SPTexture *textureFive;
@property (strong) SPTexture *textureBorder;

-(id)initWithDefault;
-(void)bakeTheTextures;
-(void)renderDefault:(int)value;
-(void)addImage:(SPImage *)image;
-(void)updateValue;

@end
