#include "bench/fib.hpp"

// RE Benchmark TU 19916 of 20000 (depth=28, stamp="default")
namespace bench_tu_19916 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19916>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19916
