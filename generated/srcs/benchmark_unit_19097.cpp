#include "bench/fib.hpp"

// RE Benchmark TU 19097 of 20000 (depth=28, stamp="default")
namespace bench_tu_19097 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19097>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19097
