/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalytics : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    <AFAnalyticsService> * _service;
}

+ (id)sharedAnalytics;

- (void).cxx_destruct;
- (void)_logEventWithName:(id)arg1 machTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4;
- (id)_service:(BOOL)arg1;
- (void)_setService:(id)arg1;
- (id)init;
- (void)logEvent:(id)arg1 context:(id)arg2;
- (void)logEvent:(id)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3;
- (void)logEvent:(id)arg1 contextProvider:(id /* block */)arg2;
- (void)logEvent:(id)arg1 contextProvider:(id /* block */)arg2 contextProvidingQueue:(id)arg3;

@end