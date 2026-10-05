#include "bench/fib.hpp"

// RE Benchmark TU 17929 of 20000 (depth=28, stamp="default")
namespace bench_tu_17929 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17929>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17929
