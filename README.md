# CheckTLS

Inspired by [Gmails new notification](https://threatpost.com/google-to-warn-recipients-of-unencrypted-gmail-messages/115379/) of StartTLS encrypted messages, I thought I'd be nice to have something similar in OS X Mail. CheckTLS is a Mail plugin (written in pure Swift :smile:), that aims to inform you the moment you're composing an email, whether the recipient’s mail servers supports StartTLS. CheckTLS will warn you when StartTLS is not supported by the recipient’s mail server (your message will be sent unencrypted).

###TODO

- [x] Get plugin structure running in OSX Mail.
- [x] Check StartTLS status for a mail server.
- [x] Inject code into OSX Mail.
- [ ] Implement a continuous check upon insertion of recipient.
- [ ] Show a warning somehow... This is tricky..
- [ ] SHIPPING!!
