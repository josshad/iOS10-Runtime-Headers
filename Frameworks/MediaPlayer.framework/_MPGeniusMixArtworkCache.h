/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSData, UIImage;

@interface _MPGeniusMixArtworkCache : NSObject  {
    NSData *_data;
    UIImage *_artworkImage;
}

@property(readonly) UIImage * artworkImage;
@property(readonly) unsigned int coverCount;
@property(readonly) struct CGSize { float x1; float x2; } coverSize;
@property(readonly) unsigned long long entityArtworkCacheHash;

+ (id)artworkCacheWithContentsOfFile:(id)arg1;
+ (id)artworkCacheWithCoverCount:(unsigned int)arg1 coverSize:(struct CGSize { float x1; float x2; })arg2 entityArtworkCacheHash:(unsigned long long)arg3 artworkData:(void*)arg4 length:(unsigned int)arg5;

- (struct CGSize { float x1; float x2; })coverSize;
- (unsigned int)coverCount;
- (unsigned long long)entityArtworkCacheHash;
- (id)artworkImage;
- (BOOL)writeToFile:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end