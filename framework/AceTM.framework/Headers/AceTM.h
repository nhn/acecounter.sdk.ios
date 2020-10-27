#ifndef AceTM_h
#define AceTM_h

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "AceConfiguration.h"
#import "AceProduct.h"
#import "ACEGender.h"

#import "AceConfigurationBuilderForPlus.h"
#import "ACEPublicStaticConfig.h"

// umbrella header for module 'AceTM' does not include header '.....h' 경고뜸
// 테스트 케이스 시동시에는 주석처리 필요 중복 정의 오류 뜸
#import "ACParams.h"
#import "ACSDK.h"
#import "ACEOnePublicEnum.h"
#import "ACProduct.h"

@interface AceTM : NSObject

// init
+ (void)configure:(AceConfiguration * _Nonnull)config;
+ (void)configureWithCallback:(AceConfiguration * _Nonnull)config
                    completed:(void (^ _Nullable)(NSDictionary * _Nullable results))completed
                       failed:(void (^ _Nullable)(NSDictionary * _Nullable results))failed;

// common
+ (NSString * _Nonnull)getKey;

// commerce
+ (void)addCartWithProduct:(AceProduct * _Nonnull)product NS_SWIFT_NAME(addCart(product:));
+ (void)bannerClickWithPromotionCode:(NSInteger)promotionCode
                          bannerCode:(NSInteger)bannerCode NS_SWIFT_NAME(bannerClick(promotionCode:bannerCode:));
+ (void)bannerViewWithPromotionCode:(NSInteger)promotionCode
                         bannerCode:(NSInteger)bannerCode NS_SWIFT_NAME(bannerView(promotionCode:bannerCode:));
+ (void)buyListWithPaymentMethod:(NSString * _Nullable)paymentMethod
                     orderNumber:(NSString * _Nullable)orderNumber
                      totalPrice:(double)totalPrice
                         product:(AceProduct * _Nullable)product NS_SWIFT_NAME(buyList(paymentMethod:orderNumber:totalPrice:product:)) DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. buyListWithPaymentMethod:orderNumber:totalPrice:products: 로 변경해주세요");
+ (void)buyListWithPaymentMethod:(NSString * _Nullable)paymentMethod
                     orderNumber:(NSString * _Nullable)orderNumber
                      totalPrice:(double)totalPrice
                        products:(NSArray<AceProduct *> * _Nullable)products NS_SWIFT_NAME(buyList(paymentMethod:orderNumber:totalPrice:products:));
+ (void)buyNowWithProduct:(AceProduct * _Nonnull)product NS_SWIFT_NAME(buyNow(product:));
+ (void)customerClickWithClickName:(NSString * _Nullable)clickName NS_SWIFT_NAME(customerClick(clickName:));
+ (void)detailViewWithPage:(NSString * _Nullable)page
             productNumber:(NSString * _Nullable)productNumber
               productName:(NSString * _Nullable)productName
              productPrice:(double)productPrice
           productCategory:(NSString * _Nullable)productCategory
           productImageUrl:(NSString * _Nullable)productImageUrl NS_SWIFT_NAME(detailView(page:productNumber:productName:productPrice:productCategory:productImageUrl:));
+ (void)detailViewWithProductNumber:(NSString * _Nullable)productNumber
                        productName:(NSString * _Nullable)productName
                       productPrice:(double)productPrice
                    productCategory:(NSString * _Nullable)productCategory
                    productImageUrl:(NSString * _Nullable)productImageUrl NS_SWIFT_NAME(detailView(productNumber:productName:productPrice:productCategory:productImageUrl:)) DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. detailViewWithPage:productNumber:productName:productPrice:productCategory:productImageUrl: 로 변경해주세요");
+ (void)payWithPayName:(NSString * _Nullable)payName
               product:(AceProduct * _Nullable)product NS_SWIFT_NAME(pay(payName:product:)) DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. payWithPayName:products: 로 변경해주세요");
+ (void)payWithPayName:(NSString * _Nullable)payName
              products:(NSArray<AceProduct *> * _Nullable)products NS_SWIFT_NAME(pay(payName:products:));
+ (void)reviewWithProductNumber:(NSString * _Nullable)productNumber
                 reviewContents:(NSString * _Nullable)reviewContents
                          score:(NSInteger)score NS_SWIFT_NAME(review(productNumber:reviewContents:score:));
+ (void)snsWithProductNumber:(NSString * _Nullable)productNumber
                         sns:(NSString * _Nullable)sns NS_SWIFT_NAME(sns(productNumber:sns:));
+ (void)telWithPhoneNumber:(NSString * _Nullable)phoneNumber NS_SWIFT_NAME(tel(phoneNumber:));
+ (void)wishListWithProduct:(AceProduct * _Nonnull)product NS_SWIFT_NAME(wishList(product:));

// deeplink
+ (void)appOpenUrl:(NSURL * _Nullable)url NS_SWIFT_NAME(appOpenUrl(url:));
+ (void)appOpenUrlWithUrl:(NSURL * _Nullable)url DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. appOpenUrl 로 변경해주세요");

// error
+ (void)codeErr:(NSInteger)errCode
         reason:(NSString * _Nullable)reason NS_SWIFT_NAME(codeErr(errCode:reason:));
+ (void)pageErr NS_SWIFT_NAME(pageErr());
+ (void)pageErr:(NSString * _Nullable)pageName NS_SWIFT_NAME(pageErr(page:));

// hybrid
+ (void)addScriptMessageHandler:(id _Nonnull)scriptMessageHandler
          userContentController:(WKUserContentController * _Nonnull)userContentController;
+ (void)userContentController:(WKUserContentController * _Nonnull)userContentController
                   didReceive:(WKScriptMessage * _Nonnull)message;
+ (void)webViewDidStartLoadWithWebView:(WKWebView * _Nonnull)webView NS_SWIFT_NAME(webViewDidStartLoad(webView:));
+ (void)webViewDidFinishLoadWithWebView:(WKWebView * _Nullable)webView NS_SWIFT_NAME(webViewDidFinishLoad(webView:));

// lifecycle
+ (void)appDidFinishLaunchingWithConfiguration:(AceConfiguration * _Nullable)aceConfiguration NS_SWIFT_NAME(appDidFinishLaunching(configuration:)) __attribute((unavailable("2.0.0 에서 configure 로 대체 됐습니다.")));
+ (void)viewDidLoad DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. pvWithPage 로 변경해주세요");
+ (void)viewDidLoadWithAutoPv:(BOOL)autoPv NS_SWIFT_NAME(viewDidLoad(autoPv:)) DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. pvWithPage 로 변경해주세요");

// login
+ (void)deactivateWithUserId:(NSString * _Nullable)userId NS_SWIFT_NAME(deactivate(userId:));
+ (void)joinWithUserId:(NSString * _Nullable)userId
             userValue:(NSInteger)userValue NS_SWIFT_NAME(join(userId:userValue:));
+ (void)loginWithPage:(NSString * _Nullable)page
               userId:(NSString * _Nullable)userId
              userAge:(NSInteger)userAge
           userGender:(ACEGender)userGender
               group1:(NSInteger)group1
               group2:(NSInteger)group2
               group3:(NSInteger)group3
               group4:(NSInteger)group4
               group5:(NSInteger)group5 NS_SWIFT_NAME(login(page:userId:userAge:userGender:group1:group2:group3:group4:group5:));
+ (void)loginWithUserId:(NSString * _Nullable)userId
                userAge:(NSInteger)userAge
             userGender:(NSString * _Nullable)userGender NS_SWIFT_NAME(login(userId:userAge:userGender:)) DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. loginWithPage:userId:userAge:userGender:group1:group2:group3:group4:group5: 로 변경해주세요");
+ (void)loginWithPage:(NSString * _Nullable)page
               userId:(NSString * _Nullable)userId
              userAge:(NSInteger)userAge
           userGender:(NSString * _Nullable)userGender NS_SWIFT_NAME(login(page:userId:userAge:userGender:)) DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. loginWithPage:userId:userAge:userGender:group1:group2:group3:group4:group5: 로 변경해주세요");

// plugin
+ (NSString * _Nonnull)getServiceId;
+ (NSString * _Nonnull)getPVParameters:(NSString * _Nullable)url
                 isNeedRemoveFirstChar:(BOOL)isNeedRemoveFirstChar __attribute((unavailable("2.0.0 에서 getPVParameters:completed:failed: 로 대체 됐습니다.")));
+ (void)getPVParameters:(NSString * _Nullable)pageName
  isNeedRemoveFirstChar:(BOOL)isNeedRemoveFirstChar
               callback:(void (^ _Nullable)(NSString * _Nonnull param))callback __attribute((unavailable("2.0.0 에서 getPVParameters:completed:failed: 로 대체 됐습니다.")));
+ (void)getPVParameters:(NSString * _Nullable)pageName
              completed:(void (^ _Nullable)(NSDictionary * _Nullable results))completed
                 failed:(void (^ _Nullable)(NSDictionary * _Nullable results))failed;
+ (BOOL)isCordovaPluginMode;
+ (NSString * _Nullable)getGsck;
+ (void)setGsck:(NSString * _Nullable)gsck;

// push
+ (void)push:(NSDictionary * _Nullable)data NS_SWIFT_NAME(push(data:));
+ (void)pushWithData:(NSDictionary * _Nullable)data DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. push 로 변경해주세요");

// pv
+ (void)pv DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. pvWithPage 로 변경해주세요");
+ (void)pvWithPage:(NSString * _Nullable)pageName NS_SWIFT_NAME(pv(page:));
+ (void)pvWithParameters:(NSString * _Nonnull)parameters;

// QA
//+ (void)removeAllCache;
//+ (void)sendLNCWithACEExceptionWithDebugInfo:(NSString * _Nullable)msg;
//+ (void)sendLNCWithNSErrorWithDebugInfo:(NSString * _Nullable)msg;
//+ (void)sendLNCWithNSExceptionWithDebugInfo:(NSString * _Nullable)msg;

// search
+ (void)innerSearchWithKeyword:(NSString * _Nullable)keyword DEPRECATED_MSG_ATTRIBUTE("2.0.0 에서 deprecated 됐습니다. innerSearchWithPage:keyword: 로 변경해주세요");
+ (void)innerSearchWithPage:(NSString * _Nullable)page
                    keyword:(NSString * _Nullable)keyword;

@end

#endif
