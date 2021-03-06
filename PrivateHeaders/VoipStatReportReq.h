//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, VoipStatReportData;

@interface VoipStatReportReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasReportData:1;
    unsigned int hasChannelReportData:1;
    unsigned int hasDialReportData:1;
    unsigned int hasEngineReportData:1;
    unsigned int hasTimestamp64:1;
    unsigned int hasEngineExtReportData:1;
    BaseRequest *baseRequest;
    VoipStatReportData *reportData;
    VoipStatReportData *channelReportData;
    VoipStatReportData *dialReportData;
    VoipStatReportData *engineReportData;
    unsigned long long timestamp64;
    VoipStatReportData *engineExtReportData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetEngineExtReportData:) VoipStatReportData *engineExtReportData; // @synthesize engineExtReportData;
@property(readonly, nonatomic) BOOL hasEngineExtReportData; // @synthesize hasEngineExtReportData;
@property(nonatomic, setter=SetTimestamp64:) unsigned long long timestamp64; // @synthesize timestamp64;
@property(readonly, nonatomic) BOOL hasTimestamp64; // @synthesize hasTimestamp64;
@property(retain, nonatomic, setter=SetEngineReportData:) VoipStatReportData *engineReportData; // @synthesize engineReportData;
@property(readonly, nonatomic) BOOL hasEngineReportData; // @synthesize hasEngineReportData;
@property(retain, nonatomic, setter=SetDialReportData:) VoipStatReportData *dialReportData; // @synthesize dialReportData;
@property(readonly, nonatomic) BOOL hasDialReportData; // @synthesize hasDialReportData;
@property(retain, nonatomic, setter=SetChannelReportData:) VoipStatReportData *channelReportData; // @synthesize channelReportData;
@property(readonly, nonatomic) BOOL hasChannelReportData; // @synthesize hasChannelReportData;
@property(retain, nonatomic, setter=SetReportData:) VoipStatReportData *reportData; // @synthesize reportData;
@property(readonly, nonatomic) BOOL hasReportData; // @synthesize hasReportData;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

