dypcoe@dypcoe-OptiPlex-3020:~/Desktop/google-cloud-sdk$ gcloud init
Welcome! This command will take you through the configuration of gcloud.

Settings from your current configuration [rohand] are:
core:
  disable_usage_reporting: 'False'

Pick configuration to use:
 [1] Re-initialize this configuration [rohand] with new settings 
 [2] Create a new configuration
 [3] Switch to and re-initialize existing configuration: [ashishpatil]
 [4] Switch to and re-initialize existing configuration: [default]
 [5] Switch to and re-initialize existing configuration: [hemu]
 [6] Switch to and re-initialize existing configuration: [qwerty]
Please enter your numeric choice:  2

Enter configuration name. Names start with a lower case letter and contain only 
lower case letters a-z, digits 0-9, and hyphens '-':  rohan
Your current configuration has been set to: [rohan]

You can skip diagnostics next time by using the following flag:
  gcloud init --skip-diagnostics

Network diagnostic detects and fixes local network connection issues.
Checking network connection...done.                                            
Reachability Check passed.
Network diagnostic passed (1/1 checks passed).

Choose the account you would like to use to perform operations for this 
configuration:
 [1] abp433636@gmail.com
 [2] akanshakhedkar@gmail.com
 [3] suyogsabale717@gmail.com
 [4] Log in with a new account
Please enter your numeric choice:  4

Your browser has been opened to visit:

    https://accounts.google.com/o/oauth2/auth?response_type=code&client_id=32555940559.apps.googleusercontent.com&redirect_uri=http%3A%2F%2Flocalhost%3A8085%2F&scope=openid+https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fuserinfo.email+https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fcloud-platform+https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fappengine.admin+https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fsqlservice.login+https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fcompute+https%3A%2F%2Fwww.googleapis.com%2Fauth%2Faccounts.reauth&state=OQR3jz09sQAqWpzU4UFeFIS5iNaJhH&access_type=offline&code_challenge=NqMZVBL-24hhohI8_fyv2CXHhTMwsvVMEnaoTty3jjg&code_challenge_method=S256

You are logged in as: [rohandhalpe05@gmail.com].

This account has no projects.

Would you like to create one? (Y/n)?  y

Enter a Project ID. Note that a Project ID CANNOT be changed later.
Project IDs must be 6-30 characters (lowercase ASCII, digits, or
hyphens) in length and start with a lowercase letter. 05022003
WARNING: Project creation failed: HttpError accessing <https://cloudresourcemanager.googleapis.com/v1/projects?alt=json>: response: <{'vary': 'Origin, X-Origin, Referer', 'content-type': 'application/json; charset=UTF-8', 'content-encoding': 'gzip', 'date': 'Thu, 18 May 2023 07:21:37 GMT', 'server': 'ESF', 'cache-control': 'private', 'x-xss-protection': '0', 'x-frame-options': 'SAMEORIGIN', 'x-content-type-options': 'nosniff', 'server-timing': 'gfet4t7; dur=1352', 'alt-svc': 'h3=":443"; ma=2592000,h3-29=":443"; ma=2592000', 'transfer-encoding': 'chunked', 'status': 400}>, content <{
  "error": {
    "code": 400,
    "message": "field [project_id] has issue [project_id contains invalid characters]",
    "status": "INVALID_ARGUMENT",
    "details": [
      {
        "@type": "type.googleapis.com/google.rpc.BadRequest",
        "fieldViolations": [
          {
            "field": "project_id",
            "description": "project_id contains invalid characters"
          }
        ]
      },
      {
        "@type": "type.googleapis.com/google.rpc.Help",
        "links": [
          {
            "url": "https://cloud.google.com/resource-manager/reference/rest/v1/projects"
          }
        ]
      }
    ]
  }
}
>
Please make sure to create the project [05022003] using
    $ gcloud projects create 05022003
or change to another project using
dypcoe@dypcoe-OptiPlex-3020:~/Desktop/google-cloud-sdk$ gcloud config set project 05022003
WARNING: You do not appear to have access to project [05022003] or it does not exist.
Are you sure you wish to set property [core/project] to 05022003?

Do you want to continue (Y/n)?  y

Updated property [core/project].
dypcoe@dypcoe-OptiPlex-3020:~/Desktop/google-cloud-sdk$ gcloud init
Welcome! This command will take you through the configuration of gcloud.

Settings from your current configuration [rohan] are:
core:
  account: rohandhalpe05@gmail.com
  disable_usage_reporting: 'False'
  project: '05022003'

Pick configuration to use:
 [1] Re-initialize this configuration [rohan] with new settings 
 [2] Create a new configuration
 [3] Switch to and re-initialize existing configuration: [ashishpatil]
 [4] Switch to and re-initialize existing configuration: [default]
 [5] Switch to and re-initialize existing configuration: [hemu]
 [6] Switch to and re-initialize existing configuration: [qwerty]
 [7] Switch to and re-initialize existing configuration: [rohand]
Please enter your numeric choice:  1

Your current configuration has been set to: [rohan]

You can skip diagnostics next time by using the following flag:
  gcloud init --skip-diagnostics

Network diagnostic detects and fixes local network connection issues.
Checking network connection...done.                                                           
Reachability Check passed.
Network diagnostic passed (1/1 checks passed).

Choose the account you would like to use to perform operations for this configuration:
 [1] abp433636@gmail.com
 [2] akanshakhedkar@gmail.com
 [3] rohandhalpe05@gmail.com
 [4] suyogsabale717@gmail.com
 [5] Log in with a new account
Please enter your numeric choice:  3

You are logged in as: [rohandhalpe05@gmail.com].

This account has no projects.

Would you like to create one? (Y/n)?  y

Enter a Project ID. Note that a Project ID CANNOT be changed later.
Project IDs must be 6-30 characters (lowercase ASCII, digits, or
hyphens) in length and start with a lowercase letter. 

