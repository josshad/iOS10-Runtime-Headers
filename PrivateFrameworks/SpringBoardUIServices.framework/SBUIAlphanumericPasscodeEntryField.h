/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {
    UIView * _leftPaddingView;
    UIView * _rightPaddingView;
    UIView * _springView;
    UIView * _springViewParent;
}

@property (nonatomic, readonly) UITextInputTraits *textInputTraits;

- (void).cxx_destruct;
- (void)_autofillForMesaWithCompletion:(id /* block */)arg1;
- (void)_resetForFailedPasscode:(bool)arg1;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (void)layoutSubviews;
- (void)notePasscodeFieldTextDidChange;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)textInputTraits;

@end
