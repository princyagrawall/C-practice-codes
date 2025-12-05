#include <stdio.h>
#include <string.h>

typedef enum {
    OFF = 0,
    ON = 1
} Status;

typedef struct {
    char name[20];
    Status status;
    struct {
        unsigned int wifi : 1;
        unsigned int bluetooth : 1;
        unsigned int powerSave : 1;
    } features;
} Device;

void toggle(Device *d) {
    if (d->status == ON)
        d->status = OFF;
    else
        d->status = ON;
}

void display(Device d) {
    printf("\nDevice Name: %s", d.name);
    printf("\nStatus: %s", (d.status == ON) ? "ON" : "OFF");
    printf("\nWiFi: %s", (d.features.wifi) ? "Enabled" : "Disabled");
    printf("\nBluetooth: %s", (d.features.bluetooth) ? "Enabled" : "Disabled");
    printf("\nPower Save Mode: %s\n", (d.features.powerSave) ? "Enabled" : "Disabled");
}

int main() {
    Device fan = {"Smart Fan", OFF, {1, 0, 1}};
    Device light = {"Smart Light", ON, {1, 1, 0}};
    Device ac = {"Smart AC", OFF, {1, 1, 1}};

    printf("Initial Configuration:");
    display(fan);
    display(light);
    display(ac);

    toggle(&fan);
    toggle(&light);
    toggle(&ac);

    printf("\nAfter Toggling Status:");
    display(fan);
    display(light);
    display(ac);

    return 0;
}

