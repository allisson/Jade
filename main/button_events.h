#ifndef BUTTON_EVENTS_H_
#define BUTTON_EVENTS_H_

typedef enum {
    BTN_BACK,
    BTN_HELP,
    BTN_YES,
    BTN_NO,
    BTN_QR_HELP_EXIT,

    BTN_CAMERA_HELP,
    BTN_CAMERA_CLICK,
    BTN_CAMERA_EXIT,

    BTN_TX_SCREEN_NEXT,
    BTN_TX_SCREEN_PREV,
    BTN_TX_SCREEN_EXIT,

    BTN_SIGNMSG_MSG,
    BTN_SIGNMSG_HASH,
    BTN_SIGNMSG_PATH,
    BTN_SIGNMSG_NEXT,
    BTN_SIGNMSG_BACK,
    BTN_SIGNMSG_REJECT,
    BTN_SIGNMSG_ACCEPT,

    BTN_CANCEL_SIGNATURE,
    BTN_ACCEPT_SIGNATURE,

    BTN_ADDRESS_NEXT,
    BTN_ADDRESS_REJECT,
    BTN_ADDRESS_ACCEPT,

    BTN_OTA_VIEW_CURRENT_VERSION,
    BTN_OTA_VIEW_NEW_VERSION,
    BTN_OTA_VIEW_FW_HASH,
    BTN_OTA_REJECT,
    BTN_OTA_ACCEPT,

    BTN_BLE_CONFIRM,
    BTN_BLE_DENY,

    BTN_MNEMONIC_TYPE,
    BTN_MNEMONIC_ADVANCED,
    BTN_MNEMONIC_METHOD,

    BTN_NEW_MNEMONIC,
    BTN_NEW_MNEMONIC_12,
    BTN_NEW_MNEMONIC_24,

    BTN_MNEMONIC_PREV,
    BTN_MNEMONIC_NEXT,
    BTN_MNEMONIC_EXIT,
    BTN_MNEMONIC_VERIFY,

    BTN_RESTORE_MNEMONIC,
    BTN_RESTORE_MNEMONIC_12,
    BTN_RESTORE_MNEMONIC_24,
    BTN_RESTORE_MNEMONIC_QR,

    BTN_MNEMONIC_FINAL_WORD_EXISTING,
    BTN_MNEMONIC_FINAL_WORD_CALCULATE,
    BTN_MNEMONIC_FINAL_WORD_HELP,

    BTN_QR_EXPORT_PREV,
    BTN_QR_EXPORT_NEXT,
    BTN_QR_EXPORT_DONE,

    BTN_PASSPHRASE_ONCE,
    BTN_PASSPHRASE_ALWAYS,
    BTN_PASSPHRASE_NEVER,
    BTN_PASSPHRASE_FREQUENCY,
    BTN_PASSPHRASE_METHOD,
    BTN_PASSPHRASE_HELP,
    BTN_PASSPHRASE_EXIT,

    BTN_BIP85_12_WORDS,
    BTN_BIP85_24_WORDS,
    BTN_BIP85_EXIT,

    BTN_INITIALIZE,
    BTN_SCAN_SEEDQR,
    BTN_SETTINGS,
    BTN_SCAN_QR,
    BTN_SESSION,

    BTN_SESSION_LOGOUT,
    BTN_SESSION_SLEEP,
    BTN_SESSION_EXIT,

    BTN_CONNECT_TO_BACK,

    BTN_CONNECT_VIA_USB,
    BTN_CONNECT_VIA_BLE,
    BTN_CONNECT_VIA_QR,

    BTN_CONNECT_BACK,
    BTN_CONNECT_HELP,
    BTN_CONNECT_QR_PIN,
    BTN_CONNECT_QR_SCAN,

    BTN_QR_MODE,
    BTN_CONNECT,

    BTN_SETTINGS_TOGGLE_ORIENTATION,
    BTN_SETTINGS_DEVICE,
    BTN_SETTINGS_DEVICE_EXIT,
    BTN_SETTINGS_WALLET,
    BTN_SETTINGS_WALLET_EXIT,
    BTN_SETTINGS_AUTHENTICATION,
    BTN_SETTINGS_AUTHENTICATION_EXIT,
    BTN_SETTINGS_PREFS,
    BTN_SETTINGS_PREFS_EXIT,
    BTN_SETTINGS_XPUB_EXPORT,
    BTN_SETTINGS_QR_PINSERVER,
    BTN_SETTINGS_TEMPORARY_WALLET_LOGIN,
    BTN_SETTINGS_PINSERVER,
    BTN_SETTINGS_PINSERVER_SHOW,
    BTN_SETTINGS_PINSERVER_SCAN_QR,
    BTN_SETTINGS_PINSERVER_RESET,
    BTN_SETTINGS_PINSERVER_HELP,
    BTN_SETTINGS_PINSERVER_EXIT,
    BTN_SETTINGS_INFO,
    BTN_SETTINGS_INFO_EXIT,
    BTN_SETTINGS_INFO_FWVERSION,
    BTN_SETTINGS_INFO_FWVERSION_EXIT,
    BTN_SETTINGS_DEVICE_INFO,
    BTN_SETTINGS_DEVICE_INFO_MAC,
    BTN_SETTINGS_DEVICE_INFO_BATTERY,
    BTN_SETTINGS_DEVICE_INFO_STORAGE,
    BTN_SETTINGS_DEVICE_INFO_STORAGE_EXIT,
    BTN_SETTINGS_DEVICE_INFO_DETAIL_EXIT,
    BTN_SETTINGS_DEVICE_INFO_EXIT,
    BTN_SETTINGS_LEGAL,
    BTN_SETTINGS_SCREEN_BRIGHTNESS,
    BTN_SETTINGS_IDLE_TIMEOUT,
    BTN_SETTINGS_MULTISIG,
    BTN_SETTINGS_WALLET_ERASE_PIN,
    BTN_SETTINGS_BIP39_PASSPHRASE,
    BTN_SETTINGS_BIP85,
    BTN_SETTINGS_OTP,
    BTN_SETTINGS_OTP_VIEW,
    BTN_SETTINGS_OTP_NEW,
    BTN_SETTINGS_OTP_NEW_QR,
    BTN_SETTINGS_OTP_NEW_KB,
    BTN_SETTINGS_OTP_NEW_EXIT,
    BTN_SETTINGS_OTP_HELP,
    BTN_SETTINGS_OTP_EXIT,
    BTN_SETTINGS_BLE,
    BTN_SETTINGS_RESET,
    BTN_SETTINGS_EXIT,

    BTN_WALLET_ERASE_PIN_SET,
    BTN_WALLET_ERASE_PIN_DISABLE,
    BTN_WALLET_ERASE_PIN_HELP,
    BTN_WALLET_ERASE_PIN_EXIT,

    BTN_BLE_STATUS,
    BTN_BLE_RESET_PAIRING,
    BTN_BLE_HELP,
    BTN_BLE_EXIT,

    BTN_LEGAL_NEXT,
    BTN_LEGAL_PREV,
    BTN_LEGAL_EXIT,

    BTN_PINSERVER_DETAILS_CONFIRM,
    BTN_PINSERVER_DETAILS_DENY,

    BTN_MULTISIG_PREV,
    BTN_MULTISIG_NEXT,
    BTN_MULTISIG_CONFIRM,
    BTN_MULTISIG_DELETE,
    BTN_MULTISIG_EXIT,

    BTN_OTP_NAME,
    BTN_OTP_LABEL,
    BTN_OTP_ISSUER,
    BTN_OTP_TYPE,
    BTN_OTP_DETAILS,
    BTN_OTP_RETAIN_CONFIRM,
    BTN_OTP_DISCARD_DELETE,

    BTN_XPUB_OPTIONS,
    BTN_XPUB_OPTIONS_HELP,
    BTN_XPUB_OPTIONS_EXIT,
    BTN_XPUB_OPTIONS_SCRIPTTYPE,
    BTN_XPUB_OPTIONS_WALLETTYPE,
    BTN_XPUB_HELP,
    BTN_XPUB_EXIT,

    BTN_SCAN_ADDRESS_SKIP_ADDRESSES,
    BTN_SCAN_ADDRESS_EXIT,

    BTN_QR_OPTIONS,
    BTN_QR_OPTIONS_DENSITY,
    BTN_QR_OPTIONS_FRAMERATE,
    BTN_QR_OPTIONS_HELP,
    BTN_QR_OPTIONS_EXIT,
    BTN_QR_DISPLAY_HELP,
    BTN_QR_DISPLAY_EXIT,

    // NOTE: Always leave these ones last as keyboard buttons use
    // BTN_KEYBOARD_ASCII_OFFSET + <ascii-value>
    BTN_KEYBOARD_BACKSPACE,
    BTN_KEYBOARD_ENTER,
    BTN_KEYBOARD_SHIFT,
    BTN_KEYBOARD_ASCII_OFFSET

} button_event_id;

#endif /* BUTTON_EVENTS_H_ */
