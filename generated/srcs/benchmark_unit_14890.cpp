#include "bench/fib.hpp"

// RE Benchmark TU 14890 of 20000 (depth=28, stamp="default")
namespace bench_tu_14890 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14890>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14890
