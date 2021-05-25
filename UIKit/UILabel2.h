/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UILabel.h>
#import "NSCoding.h"
#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface UILabel ()
+(id)defaultFont;
-(void)_commonInit;
-(instancetype)initWithFrame:(CGRect)frame;
-(void)setFrame:(CGRect)frame;
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(CGSize)textSize;
#ifndef __IPHONE_7_0
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)lines;
#endif
-(void)_invalidateTextSize;
-(void)setActualFontSize:(float)size;
-(float)actualFontSize;
-(id)_disabledFontColor;
-(id)currentTextColor;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)drawTextInRect:(CGRect)rect;
-(void)_drawTextInRect:(CGRect)rect baselineCalculationOnly:(BOOL)only;
-(void)drawRect:(CGRect)rect;
-(void)_setWordRoundingEnabled:(BOOL)enabled;
@end

@interface UILabel (UILabelDeprecatedMethods)
-(void)setColor:(id)color;
-(id)color;
-(void)setCentersHorizontally:(BOOL)horizontally;
-(BOOL)centersHorizontally;
-(CGSize)textSizeForWidth:(float)width;
-(CGRect)textRectForBounds:(CGRect)bounds;
-(void)drawContentsInRect:(CGRect)rect;
-(void)setRawSize:(CGSize)size;
-(CGSize)rawSize;
@end

@interface UILabel (SyntheticEvents)
-(id)_scriptingInfo;
@end

@interface UILabel (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(unsigned long long)defaultAccessibilityTraits;
@end

