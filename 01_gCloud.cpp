dypcoe@dypcoe-OptiPlex-3020:~/Desktop$ cd google-cloud-sdk
dypcoe@dypcoe-OptiPlex-3020:~/Desktop/google-cloud-sdk$ ./install.sh 
Welcome to the Google Cloud CLI!

To help improve the quality of this product, we collect anonymized usage data
and anonymized stacktraces when crashes are encountered; additional information
is available at <https://cloud.google.com/sdk/usage-statistics>. This data is
handled in accordance with our privacy policy
<https://cloud.google.com/terms/cloud-privacy-notice>. You may choose to opt in this
collection now (by choosing 'Y' at the below prompt), or at any time in the
future by running the following command:

    gcloud config set disable_usage_reporting false

Do you want to help improve the Google Cloud CLI (y/N)?  ^C

Command killed by keyboard interrupt


dypcoe@dypcoe-OptiPlex-3020:~/Desktop/google-cloud-sdk$ ls
bin                  deb          LICENSE        platform       rpm
completion.bash.inc  install.bat  path.bash.inc  properties     VERSION
completion.zsh.inc   install.sh   path.fish.inc  README
data                 lib          path.zsh.inc   RELEASE_NOTES
dypcoe@dypcoe-OptiPlex-3020:~/Desktop/google-cloud-sdk$ ./install.sh 
Welcome to the Google Cloud CLI!

To help improve the quality of this product, we collect anonymized usage data
and anonymized stacktraces when crashes are encountered; additional information
is available at <https://cloud.google.com/sdk/usage-statistics>. This data is
handled in accordance with our privacy policy
<https://cloud.google.com/terms/cloud-privacy-notice>. You may choose to opt in this
collection now (by choosing 'Y' at the below prompt), or at any time in the
future by running the following command:

    gcloud config set disable_usage_reporting false

Do you want to help improve the Google Cloud CLI (y/N)?  y


Your current Google Cloud CLI version is: 431.0.0
The latest available version is: 431.0.0

┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
│                                                   Components                                                   │
├───────────────┬──────────────────────────────────────────────────────┬──────────────────────────────┬──────────┤
│     Status    │                         Name                         │              ID              │   Size   │
├───────────────┼──────────────────────────────────────────────────────┼──────────────────────────────┼──────────┤
│ Not Installed │ App Engine Go Extensions                             │ app-engine-go                │  4.5 MiB │
│ Not Installed │ Appctl                                               │ appctl                       │ 21.0 MiB │
│ Not Installed │ Artifact Registry Go Module Package Helper           │ package-go-module            │  < 1 MiB │
│ Not Installed │ Cloud Bigtable Command Line Tool                     │ cbt                          │ 11.4 MiB │
│ Not Installed │ Cloud Bigtable Emulator                              │ bigtable                     │  7.0 MiB │
│ Not Installed │ Cloud Datastore Emulator                             │ cloud-datastore-emulator     │ 35.1 MiB │
│ Not Installed │ Cloud Firestore Emulator                             │ cloud-firestore-emulator     │ 42.4 MiB │
│ Not Installed │ Cloud Pub/Sub Emulator                               │ pubsub-emulator              │ 62.6 MiB │
│ Not Installed │ Cloud Run Proxy                                      │ cloud-run-proxy              │  9.0 MiB │
│ Not Installed │ Cloud SQL Proxy                                      │ cloud_sql_proxy              │  7.8 MiB │
│ Not Installed │ Cloud Spanner Emulator                               │ cloud-spanner-emulator       │ 29.7 MiB │
│ Not Installed │ Cloud Spanner Migration Tool                         │ harbourbridge                │ 21.2 MiB │
│ Not Installed │ Google Container Registry's Docker credential helper │ docker-credential-gcr        │  1.8 MiB │
│ Not Installed │ Kustomize                                            │ kustomize                    │  4.3 MiB │
│ Not Installed │ Log Streaming                                        │ log-streaming                │ 13.9 MiB │
│ Not Installed │ Minikube                                             │ minikube                     │ 33.8 MiB │
│ Not Installed │ Nomos CLI                                            │ nomos                        │ 26.4 MiB │
│ Not Installed │ On-Demand Scanning API extraction helper             │ local-extract                │ 14.3 MiB │
│ Not Installed │ Skaffold                                             │ skaffold                     │ 22.0 MiB │
│ Not Installed │ Terraform Tools                                      │ terraform-tools              │ 61.7 MiB │
│ Not Installed │ anthos-auth                                          │ anthos-auth                  │ 20.4 MiB │
│ Not Installed │ config-connector                                     │ config-connector             │ 56.7 MiB │
│ Not Installed │ enterprise-certificate-proxy                         │ enterprise-certificate-proxy │  6.6 MiB │
│ Not Installed │ gcloud Alpha Commands                                │ alpha                        │  < 1 MiB │
│ Not Installed │ gcloud Beta Commands                                 │ beta                         │  < 1 MiB │
│ Not Installed │ gcloud app Java Extensions                           │ app-engine-java              │ 64.6 MiB │
│ Not Installed │ gcloud app Python Extensions                         │ app-engine-python            │  8.5 MiB │
│ Not Installed │ gcloud app Python Extensions (Extra Libraries)       │ app-engine-python-extras     │ 27.3 MiB │
│ Not Installed │ gke-gcloud-auth-plugin                               │ gke-gcloud-auth-plugin       │  7.7 MiB │
│ Not Installed │ kpt                                                  │ kpt                          │ 14.0 MiB │
│ Not Installed │ kubectl                                              │ kubectl                      │  < 1 MiB │
│ Not Installed │ kubectl-oidc                                         │ kubectl-oidc                 │ 20.4 MiB │
│ Not Installed │ pkg                                                  │ pkg                          │          │
│ Installed     │ BigQuery Command Line Tool                           │ bq                           │  1.6 MiB │
│ Installed     │ Bundled Python 3.9                                   │ bundled-python3-unix         │ 63.5 MiB │
│ Installed     │ Cloud Storage Command Line Tool                      │ gsutil                       │ 15.5 MiB │
│ Installed     │ Google Cloud CLI Core Libraries                      │ core                         │ 20.6 MiB │
│ Installed     │ Google Cloud CRC32C Hash Tool                        │ gcloud-crc32c                │  1.2 MiB │
└───────────────┴──────────────────────────────────────────────────────┴──────────────────────────────┴──────────┘
To install or remove components at your current SDK version [431.0.0], run:
  $ gcloud components install COMPONENT_ID
  $ gcloud components remove COMPONENT_ID

To update your SDK installation to the latest version [431.0.0], run:
  $ gcloud components update


Modify profile to update your $PATH and enable shell command completion?

Do you want to continue (Y/n)?  y

The Google Cloud SDK installer will now prompt you to update an rc file to bring
 the Google Cloud CLIs into your environment.

Enter a path to an rc file to update, or leave blank to use 
[/home/dypcoe/.bashrc]:  
Backing up [/home/dypcoe/.bashrc] to [/home/dypcoe/.bashrc.backup].
[/home/dypcoe/.bashrc] has been updated.

==> Start a new shell for the changes to take effect.


For more information on how to get started, please visit:
  https://cloud.google.com/sdk/docs/quickstarts


dypcoe@dypcoe-OptiPlex-3020:~/Desktop/google-cloud-sdk$ 
