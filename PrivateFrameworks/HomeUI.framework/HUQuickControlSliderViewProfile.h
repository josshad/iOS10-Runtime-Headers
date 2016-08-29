/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {
    bool  _hasOffState;
    bool  _hasSecondaryValue;
    double  _stepValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasOffState;
@property (nonatomic) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) double stepValue;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasOffState;
- (bool)hasSecondaryValue;
- (id)init;
- (double)percentageValueForViewValue:(id)arg1;
- (void)setHasOffState:(bool)arg1;
- (void)setHasSecondaryValue:(bool)arg1;
- (void)setStepValue:(double)arg1;
- (double)stepValue;
- (id)viewValueForPercentageValue:(double)arg1 round:(bool)arg2;

@end