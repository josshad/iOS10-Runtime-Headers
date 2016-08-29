/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXEventsExpertServant : PEXServant {
    NSObject<OS_dispatch_semaphore> * _accessComplete;
    bool  _accessGranted;
    EKCalendarVisibilityManager * _calendarVisibilityManager;
    NSArray * _calendars;
    PEXContactScorer * _contactScorer;
    id  _ekObserverRegistrationToken;
    PEXEventCache * _eventCache;
    NSObject<OS_dispatch_queue> * _eventLoadingQueue;
    NSObject<OS_dispatch_semaphore> * _initializationComplete;
    NSString * _source;
    EKEventStore * _store;
    NSString * identifier;
}

- (void).cxx_destruct;
- (bool)_areAllPeopleOfInterest:(id)arg1 inAttendeeList:(id)arg2;
- (id)_busyEventsFromEvents:(id)arg1 people:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_dateRangeForCriteria:(id)arg1;
- (id)_decItemsForEvent:(id)arg1 fields:(id)arg2 formatter:(id)arg3;
- (id)_decPredictionForEvents:(id)arg1 fields:(id)arg2 limit:(unsigned long long)arg3 formatter:(id)arg4;
- (bool)_eventIsHappening:(id)arg1;
- (id)_filterEvents:(id)arg1 forTime:(id)arg2 people:(id)arg3 busy:(bool)arg4 fields:(id)arg5;
- (id)_filterOutAllDayAndMultiDayEvents:(id)arg1;
- (id)_freeEventsAndGapsFromEvents:(id)arg1;
- (id)_fuzzyNextEvents:(id)arg1 minimumCount:(unsigned long long)arg2;
- (bool)_isFreeTime:(id)arg1;
- (id)_lastBusyEventsFromEvents:(id)arg1 people:(id)arg2;
- (id)_lastFreeEventsFromEvents:(id)arg1;
- (id)_loadCalendars;
- (id)_nextBusyEventsFromEvents:(id)arg1 people:(id)arg2;
- (id)_nextFreeEventsFromEvents:(id)arg1;
- (id)_predicateForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_preloadEvents;
- (void)_registerForNotifications;
- (bool)_shouldTreatAsUnscheduledFreeTime:(id)arg1;
- (id)_unscheduledFreeTimeEventFrom:(id)arg1 to:(id)arg2;
- (bool)_userDidOrganizeEvent:(id)arg1;
- (bool)_userIsInvitedToEvent:(id)arg1;
- (long long)_userStatusForEvent:(id)arg1;
- (id)_valuesForPrediction:(id)arg1 fields:(id)arg2 formatter:(id)arg3;
- (void)askForEKAccess;
- (void)clearCaches;
- (void)dealloc;
- (void)discoveredEvents:(id)arg1;
- (id)getWeakStore;
- (id)init;
- (id)predictionForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (void)setAccessGranted:(bool)arg1;
- (void)setContactScorer:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setupCalendarVisibilityManager;

@end