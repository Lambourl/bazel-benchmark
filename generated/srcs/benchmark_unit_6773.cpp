#include "bench/fib.hpp"

// RE Benchmark TU 6773 of 20000 (depth=28, stamp="default")
namespace bench_tu_6773 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6773>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6773
