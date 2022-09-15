
#import <React/RCTBridgeModule.h>
#import "RNBluetoothManager.h";

@interface RNBluetoothEscposPrinter : NSObject <RCTBridgeModule,WriteDataToBleDelegate>

@property (nonatomic,assign) NSInteger deviceWidth;
-(void) textPrint:(NSString *) text
       inEncoding:(NSString *) encoding
         inPosition:(NSString *) position
           isBold:(Boolean) isBold
      isUnderline:(Boolean) isUnderline
       widthTimes:(NSInteger) widthTimes
      heightTimes:(NSInteger) heightTimes
         delegate:(NSObject<WriteDataToBleDelegate> *) delegate;
@end
  
