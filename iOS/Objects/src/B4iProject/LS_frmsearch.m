
#import "iCore.h"
@interface LS_frmsearch:NSObject
@end

@implementation LS_frmsearch

- (void)LS_general:(B4ILayoutData*)views :(int)width :(int)height{
[B4ILayoutBuilder setScaleRate:0.3];
[B4ILayoutBuilder scaleAll:views :width :height];
[B4ILayoutBuilder setScaleRate:0.0];
[views get:@"pnlloading1"].Left = (int)((50 / 100.0 * width) - ([views get:@"pnlloading1"].Width / 2));
[views get:@"pnlloading1"].Top = (int)((34 / 100.0 * height) - ([views get:@"pnlloading1"].Height / 2));

}
@end