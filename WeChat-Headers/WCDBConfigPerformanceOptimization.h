//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCDBConfigPerformanceOptimization : NSObject
{
    _Bool m_disableFileLock;
    _Bool m_noARC;
    _Bool m_useBind;
    _Bool m_truncateWrite;
    int m_mmapSize;
    int m_journalSizeLimit;
}

+ (void)initialize;
@property(nonatomic) _Bool m_truncateWrite; // @synthesize m_truncateWrite;
@property(nonatomic) _Bool m_useBind; // @synthesize m_useBind;
@property(nonatomic) int m_journalSizeLimit; // @synthesize m_journalSizeLimit;
@property(nonatomic) _Bool m_noARC; // @synthesize m_noARC;
@property(nonatomic) int m_mmapSize; // @synthesize m_mmapSize;
@property(nonatomic) _Bool m_disableFileLock; // @synthesize m_disableFileLock;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

