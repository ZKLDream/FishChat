//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, NSArray, NSString;

@protocol WNNoteRichEditDelegate <NSObject>
- (void)onCancelInsert;
- (void)configItemId:(id <WNNoteItemProtocol>)arg1;
- (NSArray *)noteItemArrayFromType:(int)arg1;
- (void)deleteItem:(id <WNNoteItemProtocol>)arg1;
- (id <WNNoteItemProtocol>)noteItemFromLocalEditorId:(NSString *)arg1;
- (void)updateItem:(id <WNNoteItemProtocol>)arg1;
- (void)insertItem:(id <WNNoteItemProtocol>)arg1;
- (MMUIViewController *)getViewController;

@optional
- (void)onSendLocationToFriend:(NSString *)arg1 ViewController:(MMUIViewController *)arg2;
- (void)insertItems:(NSArray *)arg1;
@end

