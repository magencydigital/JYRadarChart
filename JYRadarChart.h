//
//  JYRadarChart.h
//  JYRadarChart
//
//  Created by jy on 13-10-31.
//  Copyright (c) 2013年 wcode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JYRadarChart : UIView

@property (nonatomic, assign) CGFloat r;
@property (nonatomic, assign) CGFloat maxValue;
@property (nonatomic, assign) CGFloat minValue;
@property (nonatomic, assign) BOOL drawPoints;
@property (nonatomic, assign) BOOL fillArea;
@property (nonatomic, assign) BOOL showLegend;
@property (nonatomic, assign) BOOL showStepText;
@property (nonatomic, assign) CGFloat colorOpacity;
@property (nonatomic, strong) UIColor *backgroundLineColorRadial;
@property (nonatomic, strong) UIColor *backgroundLineColorStep;
@property (nonatomic, strong) NSArray *dataSeries;
@property (nonatomic, strong) NSArray *attributes;
@property (nonatomic, assign) NSUInteger steps;
@property (nonatomic, assign) CGPoint centerPoint;
@property (nonatomic, strong) UIColor *backgroundFillColor;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *textColorHighlighted;
@property (nonatomic, strong) UIColor *backgroundTextColor;
@property (nonatomic, strong) UIColor *backgroundTextColorHighlighted;
@property (nonatomic, strong) NSArray *itemHighlighted;
@property (nonatomic, strong) UIColor *stepTextColor;
@property (nonatomic, strong) UIFont *scaleFont;

- (void)setTitles:(NSArray *)titles;
- (void)setColors:(NSArray *)colors;

@end
