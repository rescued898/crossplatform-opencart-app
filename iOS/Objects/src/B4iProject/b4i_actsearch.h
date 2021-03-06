#import "iCore.h"
#import "iHttp.h"
#import "iStringUtils.h"
#import "iSQL.h"
#import "iPhone.h"
#import "iJSON.h"
#import "iHUD.h"
#import "iNetwork.h"
#import "iEncryption.h"
#import "iRandomAccessFile.h"
#import "iSideMenu.h"
#import "iReleaseLogger.h"
@class b4i_main;
@class b4i_actmenu;
@class b4i_library;
@class b4i_actregister;
@class b4i_actaccount;
@class b4i_actcontact;
@class b4i_actproduct;
@class b4i_actpicture;
@class b4i_actdoorder;
@class b4i_actcategory;
@class b4i_actpayment;
@class b4i_actpush;
@class b4i_pushnotification;
@class b4i_actlogin;
@class b4i_actbasket;
@class b4i_actproducts;
@class b4i_actsms;
@class b4i_actorderdetails;
@class b4i_modshare;
@class b4i_acterrorinternet;
@class b4i_httputils2service;
@class b4i_cachedata;
@class b4i_dateutils;
@class b4i_bookmark;
@class b4i_actabout;
@class b4i_actshow;
@class b4i_actweb;
@class b4i_actsetting;
@class b4i_actreview;
@class b4i_peroperties;
@class _responseadditem;
@class b4i_imagedownloader;
@class b4i_opencart;
@class _multipartfiledata;
@class b4i_httpjob;
@class b4i_clspreferencemanager;
@class b4i_slidemenu;
@class b4i_richstring;
@class b4i_html;
@class b4i_mytoastmessageshow;
@class b4i_customlistview;
@class _period;
@class b4i_imagezoom;
@interface b4i_actsearch : B4IStaticModule
- (NSString*)  _add2cart2_receive:(B4IMap*) _res :(NSString*) _cat;
- (NSString*)  _btnadd_2_cart_click;
- (NSString*)  _btnadd_click;
- (NSString*)  _btnclose_click;
- (NSString*)  _btnlist_click;
- (NSString*)  _btnsearch_click;
- (NSString*)  _endsearch_load:(int) _lasttop;
- (NSString*)  _loadfilterpanel;
- (int)  _loadproduct:(B4IList*) _res1 :(int) _defaulttop :(B4IScrollView*) _scrollview1;
- (NSString*)  _page1_resize:(int) _width :(int) _height;
- (NSString*)  _pnlover_click;
- (NSString*)  _process_globals;
@property (nonatomic)B4IPage* _pg;
@property (nonatomic)B4ILabelWrapper* _lbltitle;
@property (nonatomic)B4ITextFieldWrapper* _txtsearch;
@property (nonatomic)B4IPanelWrapper* _pnlloading;
@property (nonatomic)B4IScrollView* _sv1;
@property (nonatomic)B4ILabelWrapper* _lblpb;
@property (nonatomic)B4IPanelWrapper* _pnlheader;
@property (nonatomic)b4i_opencart* _searchmodule;
@property (nonatomic)int _top;
@property (nonatomic)b4i_mytoastmessageshow* _mytoastmessageshow1;
@property (nonatomic)B4IButtonWrapper* _btnclose;
@property (nonatomic)B4IButtonWrapper* _btnlist;
@property (nonatomic)B4IButtonWrapper* _btnsearch;
@property (nonatomic)B4IImageViewWrapper* _divider;
@property (nonatomic)B4ILabelWrapper* _label2;
@property (nonatomic)B4ILabelWrapper* _label3;
@property (nonatomic)B4ILabelWrapper* _lblcompare;
@property (nonatomic)B4ILabelWrapper* _lbldivider1;
@property (nonatomic)B4ILabelWrapper* _lbldivier2;
@property (nonatomic)B4ILabelWrapper* _lblfield;
@property (nonatomic)B4ILabelWrapper* _lbllogical;
@property (nonatomic)B4IButtonWrapper* _lblsearch;
@property (nonatomic)B4ILabelWrapper* _lblsort_item;
@property (nonatomic)B4ILabelWrapper* _lblsort_type;
@property (nonatomic)B4ILabelWrapper* _lblval;
@property (nonatomic)B4IPanelWrapper* _pnlfilter;
@property (nonatomic)B4IPanelWrapper* _pnlloading1;
@property (nonatomic)B4IPanelWrapper* _pnlsearch;
@property (nonatomic)B4ISwitchWrapper* _rbasc;
@property (nonatomic)B4ISwitchWrapper* _rbdesc;
@property (nonatomic)B4IPickerWrapper* _txtcampare;
@property (nonatomic)B4IPickerWrapper* _txtfields;
@property (nonatomic)B4IPickerWrapper* _txtlogic;
@property (nonatomic)B4IPickerWrapper* _txtsort_item;
@property (nonatomic)B4ITextFieldWrapper* _txtval;
@property (nonatomic)B4IScrollView* _svfilter;
@property (nonatomic)B4IButtonWrapper* _btnadd;
@property (nonatomic)B4IList* _listcondition;
@property (nonatomic)B4IList* _listconditionview;
@property (nonatomic)B4IMap* _filter;
@property (nonatomic)int _topfilter;
@property (nonatomic)B4IList* _listfields;
@property (nonatomic)B4IList* _listsortfields;
@property (nonatomic)B4ILabelWrapper* _lbldesc;
@property (nonatomic)B4ILabelWrapper* _lblasc;
@property (nonatomic)b4i_main* _main;
@property (nonatomic)b4i_actmenu* _actmenu;
@property (nonatomic)b4i_library* _library;
@property (nonatomic)b4i_actregister* _actregister;
@property (nonatomic)b4i_actaccount* _actaccount;
@property (nonatomic)b4i_actcontact* _actcontact;
@property (nonatomic)b4i_actproduct* _actproduct;
@property (nonatomic)b4i_actpicture* _actpicture;
@property (nonatomic)b4i_actdoorder* _actdoorder;
@property (nonatomic)b4i_actcategory* _actcategory;
@property (nonatomic)b4i_actpayment* _actpayment;
@property (nonatomic)b4i_actpush* _actpush;
@property (nonatomic)b4i_pushnotification* _pushnotification;
@property (nonatomic)b4i_actlogin* _actlogin;
@property (nonatomic)b4i_actbasket* _actbasket;
@property (nonatomic)b4i_actproducts* _actproducts;
@property (nonatomic)b4i_actsms* _actsms;
@property (nonatomic)b4i_actorderdetails* _actorderdetails;
@property (nonatomic)b4i_modshare* _modshare;
@property (nonatomic)b4i_acterrorinternet* _acterrorinternet;
@property (nonatomic)b4i_httputils2service* _httputils2service;
@property (nonatomic)b4i_cachedata* _cachedata;
@property (nonatomic)b4i_dateutils* _dateutils;
@property (nonatomic)b4i_bookmark* _bookmark;
@property (nonatomic)b4i_actabout* _actabout;
@property (nonatomic)b4i_actshow* _actshow;
@property (nonatomic)b4i_actweb* _actweb;
@property (nonatomic)b4i_actsetting* _actsetting;
@property (nonatomic)b4i_actreview* _actreview;
@property (nonatomic)b4i_peroperties* _peroperties;
- (NSString*)  _product_receive:(B4IList*) _res :(NSString*) _scategory;
- (NSString*)  _rbasc_valuechanged:(BOOL) _value;
- (NSString*)  _rbdesc_valuechanged:(BOOL) _value;
- (NSString*)  _startactivity;
- (NSString*)  _txtsearch_enterpressed;
- (NSString*)  _txtval_focuschanged:(BOOL) _hasfocus;
@end
