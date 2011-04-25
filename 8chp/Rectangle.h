#import <Foundation/Foundation.h>

@interface Rectangle: NSObject
{
	int width;
	int height;
}

@property int width, height;
-(int) area;
-(int) perimeter;
-(void) setWidth: (int) w andHeight: (int) h;
@end

