/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualTestKit.framework/VisualTestKit
 */

@interface VTKStoreManagerImageItem : NSObject <VTKStoreManagerItem, VTKTestAttachment> {
    NSString * _fileExtension;
    NSString * _fileSufix;
    NSData * _itemData;
    unsigned long long  _itemType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) NSString *fileSufix;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *itemData;
@property (nonatomic, readonly) unsigned long long itemType;
@property (readonly) Class superclass;

+ (id)itemWithImage:(id)arg1 itemType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)attachWithThestID:(id)arg1;
- (id)fileExtension;
- (id)fileNameWithTestID:(id)arg1;
- (id)fileSufix;
- (id)initWithData:(id)arg1 itemType:(unsigned long long)arg2;
- (id)itemData;
- (unsigned long long)itemType;

@end
