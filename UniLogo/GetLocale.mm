#import <Foundation/Foundation.h>
#include <wx/string.h>

wxString GetMacOSXLocale()
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    NSArray *languages = [defaults objectForKey:@"AppleLanguages"];
    
    NSString *currentLanguage = [languages objectAtIndex:0];
   
    return wxString::FromUTF8( [currentLanguage cStringUsingEncoding:NSUTF8StringEncoding]);
}
