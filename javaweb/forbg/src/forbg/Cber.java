package forbg;

import java.io.FileInputStream;

import org.apache.commons.compress.utils.IOUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

import org.apache.hadoop.io.Text;

public class Cber {
	
	public static void upload() throws Exception 
	{
//		Configuration conf = new Configuration();
//		conf.set("fs.defaultFS", "hdfs://kali:9000");
//		FileSystem fs = FileSystem.get(conf);
//		
//		Path dst = new Path("hdfs://kali:9000/wc/srcdata/wordcount.txt");
//		FSDataOutputStream os = fs.create(dst);
//		
//		FileInputStream is = new FileInputStream("E:\\share\\bigdata\\wordcount.txt");
//		
//		IOUtils.copy(is, os);
	}
	
	public void download() 
	{
		
	}
	
	public void listFile()
	{
		
	}
	
	public void mkdir()
	{
		
	}
	
	public void rm()
	{
		
	}
	
	public static void wc_run() throws Exception
	{
		
		Configuration conf = new Configuration();
		Job job = Job.getInstance(conf);
		job.setJarByClass(Cber.class);
		
		job.setMapperClass(Cmapper.class);
		job.setReducerClass(Creducer.class);
		
		job.setOutputKeyClass(Text.class);
		job.setOutputValueClass(LongWritable.class);
		
		job.setMapOutputKeyClass(Text.class);
		job.setMapOutputValueClass(LongWritable.class);
		
		FileInputFormat.setInputPaths(job, new Path("/wc/srcdata/wordcount.txt"));
		
		FileOutputFormat.setOutputPath(job, new Path("/wc/output/"));
		
		job.waitForCompletion(true);
	}
	
	public static void main(String[] args) throws Exception 
	{
		System.out.print("hello, cber");
		//upload();

		wc_run();
		
	}
}
