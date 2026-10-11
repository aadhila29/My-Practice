 $(document).ready(function()

 {
    //add to list work
    $("#addlist").click(function()
    {
       let task=$('#taskinput').val();
       if(task)
      {
         $('#tasklist').append('<li>'+task+'</li>')
         &('#taskinput').val('');
    }
    })
}


 )


