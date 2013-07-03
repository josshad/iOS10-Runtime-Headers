/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * requestId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)rollbackRequest;
+ (id)rollbackRequestWithDictionary:(id)arg1 context:(id)arg2;

- (void)setRequestId:(id)arg1;
- (id)requestId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end