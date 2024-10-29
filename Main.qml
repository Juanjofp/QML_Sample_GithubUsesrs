import QtQuick
import QtQuick.Controls
import apiRest

Window {
  width: 640
  height: 480
  visible: true
  title: qsTr("Hello World")

  ApiRest {
    id: apiRestId
  }

  ListView {
    id: listViewId

    width: parent.width
    height: parent.height

    model: ListModel {
      ListElement { name: "Item 1" }
      ListElement { name: "Item 2" }
      ListElement { name: "Item 3" }
      ListElement { name: "Item 4" }
      ListElement { name: "Item 5" }
    }//apiRest.model

    delegate: Item {

      width: listViewId.width
      height: 50

      Text {
        text: model.name
        anchors.centerIn: parent
      }
    }
  }
}
