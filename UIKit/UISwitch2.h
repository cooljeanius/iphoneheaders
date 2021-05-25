/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UISwitch.h>
#import <UIKit/UIControl.h>
#import "NSCoding.h"
#import "UIKit-Structs.h"


@interface UISwitch ()
-(instancetype)init;
-(instancetype)initWithFrame:(CGRect)frame;
-(instancetype)initWithCoder:(NSCoder *)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)setOn:(BOOL)on animated:(BOOL)animated;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setFrame:(CGRect)frame;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)selected;
-(unsigned)state;
-(void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;
-(void)removeTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;
@end

@interface UISwitch (SyntheticEvents)
-(id)_scriptingInfo;
@end

@interface UISwitch (UISwitchPrivate)
-(void)setAlternateColors:(BOOL)colors;
@end

@interface UISwitch (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

