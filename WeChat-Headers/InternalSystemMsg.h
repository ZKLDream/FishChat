//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString, SystemMsgWrap;

@interface InternalSystemMsg : NSObject <NSCoding>
{
    SystemMsgWrap *m_msgWrap;
    NSDate *m_startTime;
    NSDate *m_endTime;
    NSString *m_imageUri;
    NSString *m_id;
}

@property(retain, nonatomic) NSString *m_id; // @synthesize m_id;
@property(retain, nonatomic) NSString *m_imageUri; // @synthesize m_imageUri;
@property(retain, nonatomic) NSDate *m_endTime; // @synthesize m_endTime;
@property(retain, nonatomic) NSDate *m_startTime; // @synthesize m_startTime;
@property(retain, nonatomic) SystemMsgWrap *m_msgWrap; // @synthesize m_msgWrap;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
