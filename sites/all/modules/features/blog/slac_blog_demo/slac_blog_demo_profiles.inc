<?php

/**
 * Create profiles.
 */
function _slac_blog_demo_create_profiles($uid) {
  $profile = profile2_create(array('type' => SLAC_PROFILE_CONTACT_TYPE, 'uid' => $uid));
  static $profile_counter = 0;

  switch ($profile_counter) {
    case 0:
      //$profile->field_prf_contact_name = array(LANGUAGE_NONE => array(array('value' => 'John Doe')));
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'John')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Doe')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Research Associate')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'LCLS')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'john.doe@email.com')));
      $file = (object) array(
        'uri' => 'public://john.doe.jpg',
        'uuid_features_file_data' =>  '/9j/4AAQSkZJRgABAQAAAQABAAD/2wCEAAkGBhEPEBAQEBAQDhASDQwQDQ0XEA8NDhMOFhMWFBMR'
                                    . 'ExIXGygqIxkvGRITITUgJCcpOCwsFyoxNTwqNSYrLSkBCQoKBQUFDQUFDSkYEhgpKSkpKSkpKSkp'
                                    . 'KSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKf/AABEIAJEAkQMBIgACEQED'
                                    . 'EQH/xAAbAAEAAwEBAQEAAAAAAAAAAAAABAUGAgEDB//EADIQAAIBAgMGBAUDBQAAAAAAAAABAgMR'
                                    . 'BSExBBJRYXGRBjJBwRNigaGxIkLwFDNSU+H/xAAUAQEAAAAAAAAAAAAAAAAAAAAA/8QAFBEBAAAA'
                                    . 'AAAAAAAAAAAAAAAAAP/aAAwDAQACEQMRAD8A/ZQAAAAAAAAAAAPHNcV3A9AUk9Gn9wAAAAAAAAAA'
                                    . 'AAAAAAAAM/iOMSlvQj+mOab/AHP0f0AmbVj0YtqC32v3XtG5T19uqTd5SfRNpdj4AAzyx6AO6NaU'
                                    . 'HeLcXy9y42fxCtKkbfMs12KQAbGlVU0pRd09GdGWw/EHRlfWL80fdczTUKynFSjo1dAdgAAAAAAA'
                                    . 'AAAAAIeKbf8ACjl55XUVw5mYbuTsaqXrS5JRX8+pBAAAAAAAAAFxgW22fwno7uD5+qKc7o1N2UZc'
                                    . 'JJ/cDYAJ3AAAAAAAAAAAAZfFv70+q/BEJ2NwtWlzUWu3/CCAAAAAAAAAAPYLNdVcDWbFf4VO+vw4'
                                    . 'X7H2EdF0QAAAAAAAAAAACg8QSTqRS1UP1d7pfziVZKxWLVad+N10tkRQAAAAAAAAB9dkpqU4Juyc'
                                    . 'ld6ZHyPYxu0uLSA2QPIqyS4JI9AAAAAAAAAAACj8Q0LShPit19Vmvz9ioNPiuyOrTtHOSe9FceRm'
                                    . 'ZwcXZpprVPJgeAAAAAAAAEnDKe9Vgvmu+iz9iMXeB7DKLdSStlaCeuerAuAAAAAAAAAAAAAAz/iC'
                                    . 'FqkX6Omu6bv+UaArsdob1Pe9YtP6PJ+wGdAAAAAAABIw6jv1YL5rvos2aspfD1Dzz6RX5fsXQAAA'
                                    . 'AAAAAAAAAcVa0Yq8pKK5uxX7Rj0I5QTm+PliBZkTFakVSmm0m4tRXq36FNXxqrLR7i4LXuQZzbd2'
                                    . '23xbuwPAAAAAAAAXuBbVBQ3HJKW9J2eV9NC2MYS9mxSpT0lvL/F5r6AagFZs2PQllNOD46x7ljTq'
                                    . 'KSvFqS4p3A6AAAAAQNoxulDRub4LTuVm0Y7Ul5bQXLN92VwA6nUcneTcnxbbZyAAAAAAAAAAAAAA'
                                    . 'ADqnVlF3i3F8U2jkAWNDHakfNaa55PuixoY7SlreD55rujOgDWf19L/ZDugZMAAAAAAAAAAAAAAA'
                                    . 'AAAAAAAAAAAAB//Z'
      );
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;

      break;
    case 1:
      //$profile->field_prf_contact_name = array(LANGUAGE_NONE => array(array('value' => 'Mauro Capello')));
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Mauro')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Capello')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Senior Staff Scientist')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'PPA')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'mauro.capello@email.com')));
      $file = (object) array(
        'uri' => 'public://mauro.capello.jpg',
        'uuid_features_file_data' =>  '/9j/4AAQSkZJRgABAQAAAQABAAD/2wCEAAkGBhQSEBIUEBQUFRQWFBAWFxAOFBASEBAYFRYVFBQSFBUXGyceFxovGhUVHy8gIycp'
                                    . 'LCwsFR4xNTAqNSYrLCoBCQoKCAYODQ4OGSkYEhgpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkp'
                                    . 'KSkpKf/AABEIAJIAZAMBIgACEQEDEQH/xAAbAAEAAgMBAQAAAAAAAAAAAAAABQYCAwQBB//EADcQAAIBAgIHBgQFBAMAAAAAAAAB'
                                    . 'AgMRBCEFBhIxQVFxImGRobHBMkKB0RMjUmKCFKLh8BZjcv/EABQBAQAAAAAAAAAAAAAAAAAAAAD/xAAUEQEAAAAAAAAAAAAAAAAA'
                                    . 'AAAA/9oADAMBAAIRAxEAPwD7iAAAAAA5MbpOFL43nwjHOT+hD19bH8kF1m/ZfcCxgrNHW137cFbnBtPwe/xJ3BY+FWO1B35rc13N'
                                    . 'AdIAAAAAAAAAAHJpTG/hU3Ljuiu9/wC3+h1kFrTLs013y9AK9VqOTbk7t72+JqZsUG3ZJtvclm2SFLVurJZqMf8A08/K4EQzfo/H'
                                    . 'ujUU47vmX6lxRIVNWKq3OD7k2vVEVicNKm7Ti4vk/VPiB9CpVFKKa3NJp9zzRkROrNfaw8b/ACuUfondeTJYAAAAAAAAAQutEV+H'
                                    . 'B8drJc7rMmitaz1b1Ix5Rv4t/YCJpYqUL7D2W+KttdL8DVUrSe+Un1k2TUtXb0k0/wAze0/hf7e7qQlWm4tqSaa4PegMFVa3Nro2'
                                    . 'jOtj5yjszk5LetrNro95qZgwJ7VjSyg/wpL4pNxl3v5X4FrPmsZ2aa4NPwZ9Ji8gPQAAAAAAACE0lg9rE0pcHv8A4XkTZy1lZgHI'
                                    . '5MbgoVF21nwkspL6m5zMHICAxOr0k+w1Jcn2X9jkloer+jzj9yzuRg5AVfR+jZVXlZJNXb9EX9EJgsLZ7MeMpS6Xd/8ABNoD0AAA'
                                    . 'AAAAA1YmPZfibGzhxOl4RyXafKO76sDS5GDkY3eypNW2rvLNGDkBk5GLkYORlCndpX3uyvxYEjoyHZb5v0O0jMLpaKtGa2LZc4+J'
                                    . 'JRkmrrNc1uA9AAAAADmxuPjTV5b+EVvZsxVfYhKT4Ju3Pkin1sS5ycpO7f8Atl3AduL0nKpvdo/pj7vic+2c+2ZQnmuqAts6K2Eu'
                                    . 'SSI6rhrbt3mS7OOvTt0A4HluXibtHUbz2nm1x4LuRi4Nuy3klhqChG3i+YEDpJbNWa77+KT9zVh8bKm7wf8AF5xf0M9OS/Pl0j6E'
                                    . 'ftgWnAaWjUyfZl+l7n0Z3lH2yzaEx7qRal8UbZ809z65ASQAA5dJwvRqL9svJX9im7ReqkbprmmvEoLyy5AbLnlzDaG0Bd8JX24R'
                                    . 'lzSf38zZJXWZX9XdI2/Llxd4vv4x9/EsAGNOko7vHiZnhH6Z0h+FTsvildLu5yAgNJYjbrTfC9l0WS9Dm2jXcbQGzaLDqvHs1H3x'
                                    . 'Xgr+5WtotmrdO1BPnKT9vYCVAAAoulKezWqL9zfjn7l6KnrTgpKp+Il2ZJJtcGss+WVgIfaG0ari4G1SLHorWBO0ars+E3ul15Py'
                                    . 'KvtHu0BdNI6XhSW/alwgn5vkiqYnFyqScpO7fguSXcc20LgbLi5ruLgbNovOiaWzQpr9qfjn7lJwWFlVnGEVe7z7lxbPoCQHoAA8'
                                    . 'bMZO+TV+5mCrPaatle3G7y39DH+pfGPPd3O3uBH4nV+jLPZcX/1uy8NxH1dVF8tR/wAop+jLA8Xuy+/05ntWvZ7uF+/jl5AVaWq0'
                                    . '+Eov6SRrerNTnH+77FqWMu2lG/at13Z9P8GylXvwa8+4Co/8aq84+MvsZLVip+qP9xa6lVpvLJJZ9cjCeLsm9nouO5P3ArtPVR/N'
                                    . 'UX8Yt+rOyhqvSXxOcurUV5Z+ZM/1G/Ldb1sYvF/tfHyaQDC4eFNWhBRXct/XmdCkeoAAAAAAAAAeHoAAAAAAAAAAAAf/2Q==');
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;
      break;
    case 2:
      //$profile->field_prf_contact_name = array(LANGUAGE_NONE => array(array('value' => 'Kami Cropp')));
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Kami')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Cropp')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Tehnician')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'FACET')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'kami.cropp@email.com')));

      $file = (object) array(
        'uri' => 'public://kami.cropp.jpg',
        'uuid_features_file_data' =>  '/9j/4AAQSkZJRgABAQAAAQABAAD/2wCEAAkGBhINDhAQEA8NDA8NDhERDQwNEA4ODwwSFBAVFBUQFBMXGygeFxkjGRISHzsgIycp'
                                    . 'LCwwIR4xNTAqNSYrLCkBCQoKDAwMDQwMDSkYFBgpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkpKSkp'
                                    . 'KSkpKf/AABEIAOAA4AMBIgACEQEDEQH/xAAbAAEBAAIDAQAAAAAAAAAAAAAAAQQGAwUHAv/EAD4QAAIBAgIFCAcGBQUAAAAAAAAB'
                                    . 'AgMRBAUSITFhkQYyQVFScXKhEyIzgbGywSM0QmJz0RQkQ5LwY4KjwuH/xAAVAQEBAAAAAAAAAAAAAAAAAAAAAf/EABQRAQAAAAAA'
                                    . 'AAAAAAAAAAAAAAD/2gAMAwEAAhEDEQA/APcQAAAAAAAAAAAPmc1FXbSS2tuyQH0DrMTygpQ1Juo/y7OL+h11flLUfNjCC33k/wBg'
                                    . 'NkBqseUVZdMH3x/ZnDjM1lV2rRfXGdRL+29gNvcktrS7z4/iIbNOHdpI0Vu+/vPkD0AGn4DO6lGyv6SHYk9nc+g2jBY+FeOlB+KL'
                                    . '50X1NAZAAAAAAAAAAAAAAAAAAAAAAAY+Ox0aENKWvojFbZPqAuMraEb6UKa6Zzu7dyW1mqY7FOpLnzqJdM0or3RWw+cZjpVpaUn4'
                                    . 'YrZHuMcAQEAEAAEBABzYLGyoTU49G2PRJdTOAgG9U8xpuEZ6cIqautKUYvuOWlXjPmyjPwtS+B5+WFRxd4txa2OLaa94HoYOl5O5'
                                    . 'tKspQqPSnBJxl0yjs19ztxO6AAAAAAAAAAAAAAAAAjdld6ktr6jT8yxzr1HL8K1QXUv/AHabZin9nPwS+DNIAEBABAABAQAQEAEB'
                                    . 'ABAQoz8mrunXjNJuMWlUa/DGT0bvddo3g8+wmLlRmpx6NTi9k09sXuZvmFrqpTjOOycU1uv0EHKAAAAAAAAAAAAAAADHzF2o1f05'
                                    . '/KzSmbrmC+xq/pT+VmkgCAACAgAgIAICACAhQIAAN4yD7rS8P/ZmjG9ZEv5Wj4PqyDPAAAAAAAAAAAAAAABxYqN6c11wkvJmim/N'
                                    . 'XNBkrO3VqAEBABAQAQEAEBCgQAAQEAG/5RG2Gor/AEoecUzz9s9FwUNGlTXVTiuEUQcwAAAAAAAAAAAAAAAODF42FFXnJRvsW1vu'
                                    . 'RpWJmpTm430ZTk431Ozd0ZmfYhzxE+qFoxXVZa/O51wAgIAICACAhQIAAICACAgFW3Xs6e43/L80pYhfZyu4rXFpqUfczz4y8oxL'
                                    . 'pYilJavXUZb1J2a8wPQgAQAAAAAAAAAAAAAGkZp94q/qS+JiHYZ/Q0MRPqnaa961+aZ1wAgIAICFAgAAgIAICACAgA+6D9eHjj8y'
                                    . 'OMy8ow/pcRSj+dN90fWfwA9EABAAAAAAAAAAAAAAdXn2Wenp3ivtKd3FdpdMTUGrbmtqfQehmHisoo1npTgnLpkm4t99toGjEM7O'
                                    . 'cIqNecUrR1SgtzX73MAoEAAEBABAQAQEAEBk5bhvTV6dPapTWl4Vrl5JgYpuPJbJ3Ri6s1adRWjF7YR26971eRn4fIKFKWnGktJO'
                                    . '6cnKSj3JvUdgQAAAAAAAAAAAAAAAAAABr/KzB3hGqvwPRn3PY+PxNXPRMRQVSEoSV4zTT95oONwro1JU5bYvb2l0Nd4HCQEKBAQA'
                                    . 'QEAEBAgbJyNwN5TrNaorQh3vXJ8LcTXqFGVScYRV5TaUVvPRMvwSoUoU4/hWt9p7W+IGSACKAAAAAAAAAAAAAAAAAAAdTn+UfxEN'
                                    . 'KPtYL1fzrs/59TtgB5q1bVsa2rqIcmJ9pPxy+ZnEUCAgAgIECAjA3PkxknoY+mqL7Sa9SL/pxf1f+dJ358UOZHwr4H2RQAAAAAAA'
                                    . 'AAAAAAAAAAAADExObUaXPqwT7KelLgtYGWDoMTyvpx5kJ1N8rQX1fkdVieVVefN0KS/KrviwOrxXtJ+OXzM4iyldtvW27t9bPkoE'
                                    . 'BAgQAAfLKRgeoUOZHwr4H2aHheVeIp2TcaqWq046+KsdthuW8H7SlOG+DU1wdmRWzAwMLn2Hq82tC/Zk9CXCVjPuAAAAAAAAAAMP'
                                    . 'M8zjhoaUtbeqEFtk/ot4GYY+Ix9Olz6kIbm1fhtNNxuc1azelNxj2IXjFfv7zAA27Ecq6UeYp1XuWjHi9fkdZieVlWXMjCmuvny4'
                                    . 'vV5HSEKMjE5jVq8+pOW69o8FqMYEAEBABAQIEAAEBABAQAQEAM58NmFWj7OpUp7oyduGwxyAd/huWleHPVOst60JcY6vI7fC8t6M'
                                    . 'vaQqUn1q048Vr8jSCAen4XN6NbmVacn2dJKX9r1mYeRszsBndbDtaFSWiv6cnpQfuez3WIr04HVZDn0cZB6tCpDn073/AN0etHag'
                                    . 'DR88xvpq83f1YPQh1WT2+93ZueKq6FOcuzCUuCueeXAEBCgQEAEBABAQIEAAEBABAQAQEAEBABAQAAQAQEAy8pzB4avCqtkX667U'
                                    . 'HqkuH0PUk7q61p7H1nkJ6fkFf0mEoS6fRRT74+q/gRX3nMrYat+nJcVY0Nm858/5Wr4PqjRQBAQoEBABAQIEAAEBABAQAQEAEBAB'
                                    . 'AQAAQAQEAEBAB6NyPnfA0tzqL/kkecHofIr7lHx1PmA//9k=');
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;

      break;
  }
  profile2_save($profile);

  $profile_counter++;
}
