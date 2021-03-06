open Revery.UI;
open Revery.UI.Components;
open Revery.Platform;

module NativeExamples = {
  let component = React.component("DefaultButtonWithCounter");

  let make = (~window, ()) =>
    component((_slots: React.Hooks.empty) => {
      let increment = () => {
        Dialog.alert(window, "Hello, world");
      };

      let containerStyle =
        Style.[
          position(`Absolute),
          justifyContent(`Center),
          alignItems(`Center),
          bottom(0),
          top(0),
          left(0),
          right(0),
        ];

      <View style=containerStyle>
        <Button title="Alert" onClick=increment />
      </View>;
    });

  let createElement = (~children as _, ~window, ()) =>
    React.element(make(~window, ()));
};

let render = window => <NativeExamples window />;
