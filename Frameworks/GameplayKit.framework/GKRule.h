/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKRule : NSObject {
    int  _salience;
}

@property (nonatomic) int salience;

+ (id)ruleWithBlockPredicate:(id /* block */)arg1 action:(id /* block */)arg2;
+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(float)arg3;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(float)arg3;

- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
- (int)salience;
- (void)setSalience:(int)arg1;

@end