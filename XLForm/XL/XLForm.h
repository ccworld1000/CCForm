//
//  XLForm.h
//  XLForm ( https://github.com/xmartlabs/XLForm )
//
//  Copyright (c) 2015 Xmartlabs ( http://xmartlabs.com )
//
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

//Descriptors
#import "XLFormDescriptor.h"
#import "XLFormRowDescriptor.h"
#import "XLFormSectionDescriptor.h"

// Categories
#import "NSArray+XLFormAdditions.h"
#import "NSExpression+XLFormAdditions.h"
#import "NSObject+XLFormAdditions.h"
#import "NSPredicate+XLFormAdditions.h"
#import "NSString+XLFormAdditions.h"
#import "UIView+XLFormAdditions.h"

//helpers
#import "XLFormOptionsObject.h"

//Controllers
#import "XLFormOptionsViewController.h"
#import "XLFormViewController.h"

//Protocols
#import "XLFormDescriptorCell.h"
#import "XLFormInlineRowDescriptorCell.h"
#import "XLFormRowDescriptorViewController.h"

//Cells
#import "XLFormBaseCell.h"
#import "XLFormButtonCell.h"
#import "XLFormCheckCell.h"
#import "XLFormDateCell.h"
#import "XLFormDatePickerCell.h"
#import "XLFormInlineSelectorCell.h"
#import "XLFormLeftRightSelectorCell.h"
#import "XLFormPickerCell.h"
#import "XLFormRightDetailCell.h"
#import "XLFormRightImageButton.h"
#import "XLFormSegmentedCell.h"
#import "XLFormSelectorCell.h"
#import "XLFormSliderCell.h"
#import "XLFormStepCounterCell.h"
#import "XLFormSwitchCell.h"
#import "XLFormTextFieldCell.h"
#import "XLFormTextViewCell.h"
#import "XLFormImageCell.h"

//Validation
#import "XLFormRegexValidator.h"


FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeAccount;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeBooleanCheck;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeBooleanSwitch;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeButton;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeCountDownTimer;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeCountDownTimerInline;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeDate;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeDateInline;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeDatePicker;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeDateTime;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeDateTimeInline;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeDecimal;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeEmail;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeImage;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeInfo;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeInteger;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeMultipleSelector;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeMultipleSelectorPopover;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeName;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeNumber;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypePassword;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypePhone;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypePicker;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorActionSheet;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorAlertView;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorLeftRight;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorPickerView;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorPickerViewInline;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorPopover;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorPush;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSelectorSegmentedControl;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeSlider;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeStepCounter;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeText;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeTextView;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeTime;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeTimeInline;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeTwitter;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeURL;
FOUNDATION_EXPORT NSString *const XLFormRowDescriptorTypeZipCode;


#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending


