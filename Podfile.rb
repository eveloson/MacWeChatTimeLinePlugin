source 'https://github.com/CocoaPods/Specs.git'

# 创建Podfile:
# ln -fs Podfile.rb Podfile

platform :osx, '10.10'
target 'MacWeChatTimeLinePlugin' do
    pod 'JRSwizzle', '~> 1.0'
end
