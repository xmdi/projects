function parse() {
  var information = document.getElementById("params");
  var data = JSON.parse(information.value);
  for (var obj in data) {
    console.log(data[obj].name + " at ID#" + data[obj].id + " is " + data[obj].value);
  }

 information.value=JSON.stringify(JSON.parse(information.value),null,2);

}
