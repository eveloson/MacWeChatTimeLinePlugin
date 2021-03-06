//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface WCDBPerformanceCollector : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableArray *m_arrPerformance;
    BOOL m_isOpenReport;
    unsigned long long m_mainThreadMaxSelectTime;
    unsigned long long m_mainThreadMaxInsertTime;
    unsigned long long m_mainThreadMaxUpdateTime;
    unsigned long long m_mainThreadMaxDeleteTime;
    unsigned long long m_mainThreadMaxTransactionTime;
    unsigned long long m_mainThreadMaxOtherTime;
    unsigned long long m_subThreadMaxSelectTime;
    unsigned long long m_subThreadMaxInsertTime;
    unsigned long long m_subThreadMaxUpdateTime;
    unsigned long long m_subThreadMaxDeleteTime;
    unsigned long long m_subThreadMaxTransactionTime;
    unsigned long long m_subThreadMaxOtherTime;
    unsigned long long _m_suspendTimeStamp;
}

+ (id)ShareInstance;
@property unsigned long long m_suspendTimeStamp; // @synthesize m_suspendTimeStamp=_m_suspendTimeStamp;
@property unsigned long long m_subThreadMaxOtherTime; // @synthesize m_subThreadMaxOtherTime;
@property unsigned long long m_subThreadMaxTransactionTime; // @synthesize m_subThreadMaxTransactionTime;
@property unsigned long long m_subThreadMaxDeleteTime; // @synthesize m_subThreadMaxDeleteTime;
@property unsigned long long m_subThreadMaxUpdateTime; // @synthesize m_subThreadMaxUpdateTime;
@property unsigned long long m_subThreadMaxInsertTime; // @synthesize m_subThreadMaxInsertTime;
@property unsigned long long m_subThreadMaxSelectTime; // @synthesize m_subThreadMaxSelectTime;
@property unsigned long long m_mainThreadMaxOtherTime; // @synthesize m_mainThreadMaxOtherTime;
@property unsigned long long m_mainThreadMaxTransactionTime; // @synthesize m_mainThreadMaxTransactionTime;
@property unsigned long long m_mainThreadMaxDeleteTime; // @synthesize m_mainThreadMaxDeleteTime;
@property unsigned long long m_mainThreadMaxUpdateTime; // @synthesize m_mainThreadMaxUpdateTime;
@property unsigned long long m_mainThreadMaxInsertTime; // @synthesize m_mainThreadMaxInsertTime;
@property unsigned long long m_mainThreadMaxSelectTime; // @synthesize m_mainThreadMaxSelectTime;
@property BOOL m_isOpenReport; // @synthesize m_isOpenReport;
- (void).cxx_destruct;
- (id)popPerformance;
- (void)addPerformance:(id)arg1;
- (void)resetParameter;
- (BOOL)isExceedLimitTimeOnSubThread:(unsigned long long)arg1 operationType:(unsigned long long)arg2;
- (BOOL)isExceedLimitTimeOnMainThread:(unsigned long long)arg1 operationType:(unsigned long long)arg2;
- (void)clearCacheItemWhenMemoryWarning;
- (id)FetchPerformanceData;
- (void)InputOnePerformance:(id)arg1;
- (BOOL)IsExceedLimitTime:(unsigned long long)arg1 operationType:(unsigned long long)arg2;
- (id)init;

@end

